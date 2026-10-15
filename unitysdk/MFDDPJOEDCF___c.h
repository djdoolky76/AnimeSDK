#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFDDPJOEDCF;
namespace System { class Object; }

#define MFDDPJOEDCF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA17420)
#define MFDDPJOEDCF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA17460)
#define MFDDPJOEDCF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA17470)

inline static constexpr unsigned int MFDDPJOEDCF___c_TypeDefinitionIndex = 34648;

	class MFDDPJOEDCF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFDDPJOEDCF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDDPJOEDCF___C_CTOR_OFFSET))(this);
		}

		::MFDDPJOEDCF* __cctor_b__28_0()
		{
			return ((::MFDDPJOEDCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDDPJOEDCF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
