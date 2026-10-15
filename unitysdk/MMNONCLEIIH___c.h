#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMNONCLEIIH;
namespace System { class Object; }

#define MMNONCLEIIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA8F4F0)
#define MMNONCLEIIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA8F520)
#define MMNONCLEIIH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA8F530)

inline static constexpr unsigned int MMNONCLEIIH___c_TypeDefinitionIndex = 33991;

	class MMNONCLEIIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMNONCLEIIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNONCLEIIH___C_CTOR_OFFSET))(this);
		}

		::MMNONCLEIIH* __cctor_b__28_0()
		{
			return ((::MMNONCLEIIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNONCLEIIH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
