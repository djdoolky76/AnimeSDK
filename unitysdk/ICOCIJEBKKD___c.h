#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICOCIJEBKKD;
namespace System { class Object; }

#define ICOCIJEBKKD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F942C70)
#define ICOCIJEBKKD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F942CB0)
#define ICOCIJEBKKD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F942CC0)

inline static constexpr unsigned int ICOCIJEBKKD___c_TypeDefinitionIndex = 28320;

	class ICOCIJEBKKD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICOCIJEBKKD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOCIJEBKKD___C_CTOR_OFFSET))(this);
		}

		::ICOCIJEBKKD* __cctor_b__28_0()
		{
			return ((::ICOCIJEBKKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOCIJEBKKD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
