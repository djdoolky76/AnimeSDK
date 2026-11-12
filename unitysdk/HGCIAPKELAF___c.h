#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGCIAPKELAF;
namespace System { class Object; }

#define HGCIAPKELAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F86E390)
#define HGCIAPKELAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F86E3C0)
#define HGCIAPKELAF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F86E3D0)

inline static constexpr unsigned int HGCIAPKELAF___c_TypeDefinitionIndex = 28001;

	class HGCIAPKELAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2CAD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGCIAPKELAF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCIAPKELAF___C_CTOR_OFFSET))(this);
		}

		::HGCIAPKELAF* __cctor_b__38_0()
		{
			return ((::HGCIAPKELAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCIAPKELAF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
