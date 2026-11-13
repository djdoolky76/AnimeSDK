#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGNHCFALBAP;
namespace System { class Object; }

#define MGNHCFALBAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA52D60)
#define MGNHCFALBAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA52DA0)
#define MGNHCFALBAP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA52DB0)

inline static constexpr unsigned int MGNHCFALBAP___c_TypeDefinitionIndex = 32376;

	class MGNHCFALBAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x474F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGNHCFALBAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGNHCFALBAP___C_CTOR_OFFSET))(this);
		}

		::MGNHCFALBAP* __cctor_b__23_0()
		{
			return ((::MGNHCFALBAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGNHCFALBAP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
