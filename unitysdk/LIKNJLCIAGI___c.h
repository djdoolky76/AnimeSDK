#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIKNJLCIAGI;
namespace System { class Object; }

#define LIKNJLCIAGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E944820)
#define LIKNJLCIAGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E944860)
#define LIKNJLCIAGI___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E944870)

inline static constexpr unsigned int LIKNJLCIAGI___c_TypeDefinitionIndex = 28541;

	class LIKNJLCIAGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIKNJLCIAGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKNJLCIAGI___C_CTOR_OFFSET))(this);
		}

		::LIKNJLCIAGI* __cctor_b__43_0()
		{
			return ((::LIKNJLCIAGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKNJLCIAGI___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
