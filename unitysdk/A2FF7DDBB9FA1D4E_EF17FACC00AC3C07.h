#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class A2FF7DDBB9FA1D4E_EA5427DF5BD32841;
namespace System { class Object; }
namespace System { class String; }

#define A2FF7DDBB9FA1D4E_EF17FACC00AC3C07_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define A2FF7DDBB9FA1D4E_EF17FACC00AC3C07__CTOR_OFFSET UNITYSDK_OFFSET(0x39C5670)

inline static constexpr unsigned int A2FF7DDBB9FA1D4E_EF17FACC00AC3C07_TypeDefinitionIndex = 12626;

class A2FF7DDBB9FA1D4E_EF17FACC00AC3C07 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_EF17FACC00AC3C07__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::Il2CppArray<::System::String*>* F3CC9513E519B712, ::System::Int32 A96B867D8BBB8B00, ::System::Int32 A84D57260767D5BD, ::A2FF7DDBB9FA1D4E_EA5427DF5BD32841* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Int32, ::A2FF7DDBB9FA1D4E_EA5427DF5BD32841*))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_EF17FACC00AC3C07_INVOKE_OFFSET))(this, F3CC9513E519B712, A96B867D8BBB8B00, A84D57260767D5BD, E04D2BE64FCE9814);
	}
};
