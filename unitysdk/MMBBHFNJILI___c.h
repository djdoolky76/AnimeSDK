#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMBBHFNJILI;
namespace System { class Object; }

#define MMBBHFNJILI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9638C0)
#define MMBBHFNJILI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9638F0)
#define MMBBHFNJILI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F963900)

inline static constexpr unsigned int MMBBHFNJILI___c_TypeDefinitionIndex = 33993;

	class MMBBHFNJILI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E0F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMBBHFNJILI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBBHFNJILI___C_CTOR_OFFSET))(this);
		}

		::MMBBHFNJILI* __cctor_b__28_0()
		{
			return ((::MMBBHFNJILI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBBHFNJILI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
