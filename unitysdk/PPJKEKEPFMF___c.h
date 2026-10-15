#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPJKEKEPFMF;
namespace System { class Object; }

#define PPJKEKEPFMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFAF5E0)
#define PPJKEKEPFMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFAF620)
#define PPJKEKEPFMF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFAF630)

inline static constexpr unsigned int PPJKEKEPFMF___c_TypeDefinitionIndex = 26249;

	class PPJKEKEPFMF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46FC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPJKEKEPFMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJKEKEPFMF___C_CTOR_OFFSET))(this);
		}

		::PPJKEKEPFMF* __cctor_b__28_0()
		{
			return ((::PPJKEKEPFMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPJKEKEPFMF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
