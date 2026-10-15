#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPKOOPBFEAH;
namespace System { class Object; }

#define HPKOOPBFEAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5CF5A0)
#define HPKOOPBFEAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CF5E0)
#define HPKOOPBFEAH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E5CF5F0)

inline static constexpr unsigned int HPKOOPBFEAH___c_TypeDefinitionIndex = 27127;

	class HPKOOPBFEAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F8C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPKOOPBFEAH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKOOPBFEAH___C_CTOR_OFFSET))(this);
		}

		::HPKOOPBFEAH* __cctor_b__18_0()
		{
			return ((::HPKOOPBFEAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKOOPBFEAH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
