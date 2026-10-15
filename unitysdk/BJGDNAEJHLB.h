#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class PEMFMPIPNJN;

#define BJGDNAEJHLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BB040)
#define BJGDNAEJHLB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C8BB060)
#define BJGDNAEJHLB_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1C8BB5A0)

inline static constexpr unsigned int BJGDNAEJHLB_TypeDefinitionIndex = 42466;

	class BJGDNAEJHLB : public ::System::Object
	{
	public:
		static ::PEMFMPIPNJN** StaticGet_FKGGBEAELPE()
		{
			return (::PEMFMPIPNJN**)UnitySDK::FromName("", "BJGDNAEJHLB")->GetStaticField(0x20860);
		}

		static ::FDPALAEIHPB** StaticGet_BJPFDPILDDK()
		{
			return (::FDPALAEIHPB**)UnitySDK::FromName("", "BJGDNAEJHLB")->GetStaticField(0x20868);
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
