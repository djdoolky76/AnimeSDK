#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPOICBFPPHK;
namespace System { class Object; }

#define NPOICBFPPHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB73B80)
#define NPOICBFPPHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB73BB0)
#define NPOICBFPPHK___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EB73BC0)

inline static constexpr unsigned int NPOICBFPPHK___c_TypeDefinitionIndex = 27818;

	class NPOICBFPPHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE1F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPOICBFPPHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOICBFPPHK___C_CTOR_OFFSET))(this);
		}

		::NPOICBFPPHK* __cctor_b__43_0()
		{
			return ((::NPOICBFPPHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOICBFPPHK___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
