#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EABDMCJDJFA;
namespace System { class Object; }

#define EABDMCJDJFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F501C50)
#define EABDMCJDJFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F501C80)
#define EABDMCJDJFA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F501C90)

inline static constexpr unsigned int EABDMCJDJFA___c_TypeDefinitionIndex = 35519;

	class EABDMCJDJFA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x444F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EABDMCJDJFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EABDMCJDJFA___C_CTOR_OFFSET))(this);
		}

		::EABDMCJDJFA* __cctor_b__28_0()
		{
			return ((::EABDMCJDJFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EABDMCJDJFA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
