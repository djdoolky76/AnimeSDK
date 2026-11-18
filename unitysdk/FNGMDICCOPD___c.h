#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GEIHCPAOKKK;
class MBKPHCPCKBO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define FNGMDICCOPD___C_EDFMKPDEDOM_OFFSET UNITYSDK_OFFSET(0x15E753A0)
#define FNGMDICCOPD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E75350)
#define FNGMDICCOPD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15E75390)

inline static constexpr unsigned int FNGMDICCOPD___c_TypeDefinitionIndex = 51587;

class FNGMDICCOPD___c : public ::System::Object
{
public:
	static ::System::Action_2<::GEIHCPAOKKK*, ::MBKPHCPCKBO*>** StaticGet___9__3_0()
	{
		return (::System::Action_2<::GEIHCPAOKKK*, ::MBKPHCPCKBO*>**)Il2CppClass::FromTypeDefinitionIndex(FNGMDICCOPD___c_TypeDefinitionIndex)->GetStaticField(0x47F20);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FNGMDICCOPD___c_TypeDefinitionIndex)->GetStaticField(0x47F28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNGMDICCOPD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGMDICCOPD___C__CTOR_OFFSET))(this);
	}

	::System::Void EDFMKPDEDOM(::GEIHCPAOKKK* OHPJHPEOFLD, ::MBKPHCPCKBO* HIBEOHLBDJL)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::MBKPHCPCKBO*))((::PBYTE)hIl2Cpp + FNGMDICCOPD___C_EDFMKPDEDOM_OFFSET))(this, OHPJHPEOFLD, HIBEOHLBDJL);
	}
};
