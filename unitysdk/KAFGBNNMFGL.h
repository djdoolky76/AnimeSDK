#pragma once
#include "unitysdk/unitysdk.h"
class NAELLAJBMAC;
class NGFHCJIAOLH;
namespace RPG::GameCore { class TaskContext; }

#define KAFGBNNMFGL_CTOR_OFFSET UNITYSDK_OFFSET(0xB2D5570)
#define KAFGBNNMFGL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2D5FA0)
#define KAFGBNNMFGL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2D55F0)
#define KAFGBNNMFGL_PAHMFNJPGCD_OFFSET UNITYSDK_OFFSET(0xB2D5D30)

	class KAFGBNNMFGL
	{
	public:
		::NGFHCJIAOLH* NFJGMKPFPOC; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NAELLAJBMAC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NAELLAJBMAC*))((::PBYTE)hIl2Cpp + KAFGBNNMFGL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFGBNNMFGL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFGBNNMFGL_DISPOSE_OFFSET))(this);
		}

		::System::Boolean PAHMFNJPGCD(::NGFHCJIAOLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + KAFGBNNMFGL_PAHMFNJPGCD_OFFSET))(this, a1);
		}

	};
