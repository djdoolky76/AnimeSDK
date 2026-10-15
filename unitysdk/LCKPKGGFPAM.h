#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDPLLJEOLHD;

#define LCKPKGGFPAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90CDF0)

	class LCKPKGGFPAM : public ::System::Object
	{
	public:
		::Il2CppArray<::DDPLLJEOLHD*>* JJJNPLOLJGE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKPKGGFPAM_CTOR_OFFSET))(this);
		}

	};
