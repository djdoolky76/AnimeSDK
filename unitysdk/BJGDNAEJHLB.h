#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class PEMFMPIPNJN;

#define BJGDNAEJHLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3BD60)
#define BJGDNAEJHLB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1DA3BD80)
#define BJGDNAEJHLB_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1DA3C2C0)

inline static constexpr unsigned int BJGDNAEJHLB_TypeDefinitionIndex = 43441;

	class BJGDNAEJHLB : public ::System::Object
	{
	public:
		static ::FDPALAEIHPB** StaticGet_BJPFDPILDDK()
		{
			return (::FDPALAEIHPB**)UnitySDK::FromName("", "BJGDNAEJHLB")->GetStaticField(0x16AE0);
		}

		static ::PEMFMPIPNJN** StaticGet_FKGGBEAELPE()
		{
			return (::PEMFMPIPNJN**)UnitySDK::FromName("", "BJGDNAEJHLB")->GetStaticField(0x16AE8);
		}

		::System::Void _ctor(::FDPALAEIHPB* a1, ::PEMFMPIPNJN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::PEMFMPIPNJN*))((::PBYTE)hIl2Cpp + BJGDNAEJHLB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGDNAEJHLB_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGDNAEJHLB_TEARDOWN_OFFSET))(this);
		}

	};
