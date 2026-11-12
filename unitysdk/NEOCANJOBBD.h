#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class HJNDPHEDAGM;

#define NEOCANJOBBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB17B80)
#define NEOCANJOBBD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1DB17BA0)
#define NEOCANJOBBD_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1DB180E0)

inline static constexpr unsigned int NEOCANJOBBD_TypeDefinitionIndex = 43169;

	class NEOCANJOBBD : public ::System::Object
	{
	public:
		static ::FDPALAEIHPB** StaticGet_BJPFDPILDDK()
		{
			return (::FDPALAEIHPB**)UnitySDK::FromName("", "NEOCANJOBBD")->GetStaticField(0x195F0);
		}

		static ::HJNDPHEDAGM** StaticGet_FKGGBEAELPE()
		{
			return (::HJNDPHEDAGM**)UnitySDK::FromName("", "NEOCANJOBBD")->GetStaticField(0x195F8);
		}

		::System::Void _ctor(::FDPALAEIHPB* a1, ::HJNDPHEDAGM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::HJNDPHEDAGM*))((::PBYTE)hIl2Cpp + NEOCANJOBBD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOCANJOBBD_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOCANJOBBD_TEARDOWN_OFFSET))(this);
		}

	};
