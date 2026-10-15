#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPLKBFMCGLD;
namespace System { class Object; }

#define PPLKBFMCGLD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB17D0)
#define PPLKBFMCGLD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB1810)
#define PPLKBFMCGLD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFB1820)

inline static constexpr unsigned int PPLKBFMCGLD___c_TypeDefinitionIndex = 34841;

	class PPLKBFMCGLD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x472A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPLKBFMCGLD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLKBFMCGLD___C_CTOR_OFFSET))(this);
		}

		::PPLKBFMCGLD* __cctor_b__28_0()
		{
			return ((::PPLKBFMCGLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLKBFMCGLD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
