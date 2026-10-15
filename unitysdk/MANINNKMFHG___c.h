#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MANINNKMFHG;
namespace System { class Object; }

#define MANINNKMFHG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B0720)
#define MANINNKMFHG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B0760)
#define MANINNKMFHG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9B0770)

inline static constexpr unsigned int MANINNKMFHG___c_TypeDefinitionIndex = 27275;

	class MANINNKMFHG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MANINNKMFHG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANINNKMFHG___C_CTOR_OFFSET))(this);
		}

		::MANINNKMFHG* __cctor_b__28_0()
		{
			return ((::MANINNKMFHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANINNKMFHG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
