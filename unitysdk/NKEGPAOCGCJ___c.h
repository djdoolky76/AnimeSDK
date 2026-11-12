#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKEGPAOCGCJ;
namespace System { class Object; }

#define NKEGPAOCGCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F046640)
#define NKEGPAOCGCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F046680)
#define NKEGPAOCGCJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F046690)

inline static constexpr unsigned int NKEGPAOCGCJ___c_TypeDefinitionIndex = 28627;

	class NKEGPAOCGCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6D9C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKEGPAOCGCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGPAOCGCJ___C_CTOR_OFFSET))(this);
		}

		::NKEGPAOCGCJ* __cctor_b__33_0()
		{
			return ((::NKEGPAOCGCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEGPAOCGCJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
