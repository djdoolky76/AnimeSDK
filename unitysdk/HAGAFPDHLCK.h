#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HAGAFPDHLCK_BFEEDDEBNLH;
class HAGAFPDHLCK_Section;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define HAGAFPDHLCK_CFFLKCIPJKM_OFFSET UNITYSDK_OFFSET(0x15B73460)
#define HAGAFPDHLCK_CTOR_OFFSET UNITYSDK_OFFSET(0x15B75FA0)
#define HAGAFPDHLCK_GFCAAHMGFDL_OFFSET UNITYSDK_OFFSET(0x15B75490)
#define HAGAFPDHLCK_GFHPMLDBFGB_OFFSET UNITYSDK_OFFSET(0x15B74AC0)
#define HAGAFPDHLCK_LHOPKOFGELM_OFFSET UNITYSDK_OFFSET(0x15B73E90)

	class HAGAFPDHLCK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGAFPDHLCK_CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Mesh* CFFLKCIPJKM(::System::Collections::Generic::List_1<::System::Object*>* a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Collections::Generic::List_1<::System::Object*>*, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + HAGAFPDHLCK_CFFLKCIPJKM_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Mesh* LHOPKOFGELM(::HAGAFPDHLCK_Section* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Mesh*(*)(::HAGAFPDHLCK_Section*, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HAGAFPDHLCK_LHOPKOFGELM_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Mesh* GFHPMLDBFGB(::HAGAFPDHLCK_Section* a1, ::HAGAFPDHLCK_BFEEDDEBNLH* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Mesh*(*)(::HAGAFPDHLCK_Section*, ::HAGAFPDHLCK_BFEEDDEBNLH*, ::System::Boolean))((::PBYTE)hIl2Cpp + HAGAFPDHLCK_GFHPMLDBFGB_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Mesh* GFCAAHMGFDL(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + HAGAFPDHLCK_GFCAAHMGFDL_OFFSET))(a1, a2, a3);
		}

	};
