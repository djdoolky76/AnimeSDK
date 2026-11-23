#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

class A2FF7DDBB9FA1D4E_EA5427DF5BD32841;
namespace System { class Object; }

#define A2FF7DDBB9FA1D4E_BD8E332AA3A4F8C5_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4AC0)
#define A2FF7DDBB9FA1D4E_BD8E332AA3A4F8C5__CTOR_OFFSET UNITYSDK_OFFSET(0x22B96A0)

inline static constexpr unsigned int A2FF7DDBB9FA1D4E_BD8E332AA3A4F8C5_TypeDefinitionIndex = 12655;

class A2FF7DDBB9FA1D4E_BD8E332AA3A4F8C5 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_BD8E332AA3A4F8C5__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
	}

	::System::Void Invoke(::A2FF7DDBB9FA1D4E_EA5427DF5BD32841* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::A2FF7DDBB9FA1D4E_EA5427DF5BD32841*))((::PBYTE)hIl2Cpp + A2FF7DDBB9FA1D4E_BD8E332AA3A4F8C5_INVOKE_OFFSET))(this, E04D2BE64FCE9814);
	}
};
