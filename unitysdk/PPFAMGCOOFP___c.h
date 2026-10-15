#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPFAMGCOOFP;
namespace System { class Object; }

#define PPFAMGCOOFP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFAAAB0)
#define PPFAMGCOOFP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFAAAE0)
#define PPFAMGCOOFP___C___CCTOR_B__88_0_OFFSET UNITYSDK_OFFSET(0x1DFAAAF0)

inline static constexpr unsigned int PPFAMGCOOFP___c_TypeDefinitionIndex = 30701;

	class PPFAMGCOOFP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x468A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPFAMGCOOFP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFAMGCOOFP___C_CTOR_OFFSET))(this);
		}

		::PPFAMGCOOFP* __cctor_b__88_0()
		{
			return ((::PPFAMGCOOFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFAMGCOOFP___C___CCTOR_B__88_0_OFFSET))(this);
		}

	};
