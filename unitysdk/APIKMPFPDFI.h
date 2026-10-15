#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APIKMPFPDFI;
class NGPOANGJHFJ;
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define APIKMPFPDFI_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0x1EC36FF0)
#define APIKMPFPDFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC36E10)
#define APIKMPFPDFI_FIKCGFJGOCA_OFFSET UNITYSDK_OFFSET(0x1EC36EA0)
#define APIKMPFPDFI_JJGCHFLLIAO_OFFSET UNITYSDK_OFFSET(0x1EC36B20)

inline static constexpr unsigned int APIKMPFPDFI_TypeDefinitionIndex = 44093;

	class APIKMPFPDFI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* MHCJMICIIBM; // 0x10
		static ::APIKMPFPDFI** StaticGet_EFLHEPNNJJN()
		{
			return (::APIKMPFPDFI**)UnitySDK::FromName("", "APIKMPFPDFI")->GetStaticField(0x47150);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APIKMPFPDFI_CTOR_OFFSET))(this);
		}

		static ::NGPOANGJHFJ* JJGCHFLLIAO()
		{
			return ((::NGPOANGJHFJ*(*)())((::PBYTE)hIl2Cpp + APIKMPFPDFI_JJGCHFLLIAO_OFFSET))();
		}

		::System::Object* FIKCGFJGOCA(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + APIKMPFPDFI_FIKCGFJGOCA_OFFSET))(this, a1);
		}

		::System::Void BKJGMFOKKKN(::System::Type* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + APIKMPFPDFI_BKJGMFOKKKN_OFFSET))(this, a1, a2);
		}

	};
