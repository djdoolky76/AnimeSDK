#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDMLEOGCCCA;
namespace System { class Object; }

#define JDMLEOGCCCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E70F470)
#define JDMLEOGCCCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E70F4B0)
#define JDMLEOGCCCA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E70F4C0)

inline static constexpr unsigned int JDMLEOGCCCA___c_TypeDefinitionIndex = 26146;

	class JDMLEOGCCCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDMLEOGCCCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMLEOGCCCA___C_CTOR_OFFSET))(this);
		}

		::JDMLEOGCCCA* __cctor_b__23_0()
		{
			return ((::JDMLEOGCCCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMLEOGCCCA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
