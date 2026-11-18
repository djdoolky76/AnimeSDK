#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEMFJBAMLDP_AINBBFDCONO_OFFSET UNITYSDK_OFFSET(0x12C58190)
#define NEMFJBAMLDP_DGKAJGELFII_OFFSET UNITYSDK_OFFSET(0x12C58140)
#define NEMFJBAMLDP_OJOPGOFKBIC_OFFSET UNITYSDK_OFFSET(0x12C58520)

inline static constexpr unsigned int NEMFJBAMLDP_TypeDefinitionIndex = 41242;

class NEMFJBAMLDP : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_GEJDJLNLFGI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NEMFJBAMLDP_TypeDefinitionIndex)->GetStaticField(0x13260);
	}

	static ::System::Void DGKAJGELFII()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEMFJBAMLDP_DGKAJGELFII_OFFSET))();
	}

	static ::System::Void OJOPGOFKBIC(::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>* PNAOMOJPPIP)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>*))((::PBYTE)hIl2Cpp + NEMFJBAMLDP_OJOPGOFKBIC_OFFSET))(PNAOMOJPPIP);
	}

	static ::System::Void AINBBFDCONO()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEMFJBAMLDP_AINBBFDCONO_OFFSET))();
	}
};
