#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAHBEAHIFCC;
namespace System { class Object; }

#define BAHBEAHIFCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E788BF0)
#define BAHBEAHIFCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E788C30)
#define BAHBEAHIFCC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E788C40)

inline static constexpr unsigned int BAHBEAHIFCC___c_TypeDefinitionIndex = 26175;

	class BAHBEAHIFCC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAHBEAHIFCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBEAHIFCC___C_CTOR_OFFSET))(this);
		}

		::BAHBEAHIFCC* __cctor_b__28_0()
		{
			return ((::BAHBEAHIFCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHBEAHIFCC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
