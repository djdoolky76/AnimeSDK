#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLCNECHMMNG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NOHKOODINEJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF0880)
#define NOHKOODINEJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCEFDE0)
#define NOHKOODINEJ_FKILJIAADJM_OFFSET UNITYSDK_OFFSET(0xBCF0820)
#define NOHKOODINEJ_GMLBJJLBPMF_OFFSET UNITYSDK_OFFSET(0xBCEFEC0)
#define NOHKOODINEJ_JFHKHOMEKIM_OFFSET UNITYSDK_OFFSET(0xBCF07C0)
#define NOHKOODINEJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBCEFD40)
#define NOHKOODINEJ_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0xBCEFE50)

	class NOHKOODINEJ : public ::JLCNECHMMNG
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* HCNNBPNNLKK; // 0x20
		::System::Single CEIBKEBGAGI; // 0x28
		::System::Single HBDJCFFDGDD; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHKOODINEJ_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Action* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + NOHKOODINEJ_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHKOODINEJ_DISPOSE_OFFSET))(this);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHKOODINEJ_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Boolean GMLBJJLBPMF(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NOHKOODINEJ_GMLBJJLBPMF_OFFSET))(this, a1, a2, a3);
		}

		::System::Single JFHKHOMEKIM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHKOODINEJ_JFHKHOMEKIM_OFFSET))(this);
		}

		::System::Single FKILJIAADJM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHKOODINEJ_FKILJIAADJM_OFFSET))(this);
		}

	};
