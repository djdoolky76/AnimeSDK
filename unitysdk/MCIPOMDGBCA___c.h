#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCIPOMDGBCA;
namespace System { class Object; }

#define MCIPOMDGBCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9F9530)
#define MCIPOMDGBCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9F9570)
#define MCIPOMDGBCA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9F9580)

	class MCIPOMDGBCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47FD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCIPOMDGBCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIPOMDGBCA___C_CTOR_OFFSET))(this);
		}

		::MCIPOMDGBCA* __cctor_b__28_0()
		{
			return ((::MCIPOMDGBCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCIPOMDGBCA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
