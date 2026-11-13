#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFJJFFMMEAF.h"
#include "unitysdk/GODJKFFNCNI.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class PGJINBJDAHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PGJINBJDAHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x16D91CF0)
#define PGJINBJDAHN_CTOR_OFFSET UNITYSDK_OFFSET(0x16D91C40)
#define PGJINBJDAHN_MJEGIKKOGAF_OFFSET UNITYSDK_OFFSET(0x16D91A40)
#define PGJINBJDAHN_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0x16D91B40)

inline static constexpr unsigned int PGJINBJDAHN_TypeDefinitionIndex = 55600;

	class PGJINBJDAHN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::GODJKFFNCNI>* FDHBDIEIGKF; // 0x10
		::System::Collections::Generic::List_1<::CFJJFFMMEAF>* CMHCFOMDBGM; // 0x18
		::System::Boolean ICMOLOJEKDF; // 0x20
		::System::Boolean PCDBKOKPOPG; // 0x21
		::System::Byte _padding0[0x2];
		::System::Nullable_1<::System::Int32> EAIBNKPIJBK; // 0x24
		static ::PGJINBJDAHN** StaticGet_JNKBIGPJDNK()
		{
			return (::PGJINBJDAHN**)UnitySDK::FromName("", "PGJINBJDAHN")->GetStaticField(0x61730);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGJINBJDAHN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGJINBJDAHN_CCTOR_OFFSET))();
		}

		::System::Void MJEGIKKOGAF(::PGJINBJDAHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGJINBJDAHN*))((::PBYTE)hIl2Cpp + PGJINBJDAHN_MJEGIKKOGAF_OFFSET))(this, a1);
		}

		::PGJINBJDAHN* NBHCPBBGAKA()
		{
			return ((::PGJINBJDAHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGJINBJDAHN_NBHCPBBGAKA_OFFSET))(this);
		}

	};
