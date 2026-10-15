#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector2.h"
class AMNHOAGPGNI;
class NGPOJOFKFGI_GEOEFGOJLCF;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define NGPOJOFKFGI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1DD7F330)
#define NGPOJOFKFGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD7FE80)
#define NGPOJOFKFGI_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1DD7FAC0)

	class NGPOJOFKFGI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPOJOFKFGI_CTOR_OFFSET))(this);
		}

		static ::System::Boolean BPLPBPMEODA(::System::Collections::Generic::IList_1<::RPG::MVector2>* a1, ::System::Single a2, ::System::Int32 a3, ::System::Object* a4)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::RPG::MVector2>*, ::System::Single, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + NGPOJOFKFGI_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean PAGKOAEOLKA(::NGPOJOFKFGI_GEOEFGOJLCF* a1, ::System::Int32 a2, ::AMNHOAGPGNI* a3)
		{
			return ((::System::Boolean(*)(::NGPOJOFKFGI_GEOEFGOJLCF*, ::System::Int32, ::AMNHOAGPGNI*))((::PBYTE)hIl2Cpp + NGPOJOFKFGI_PAGKOAEOLKA_OFFSET))(a1, a2, a3);
		}

	};
