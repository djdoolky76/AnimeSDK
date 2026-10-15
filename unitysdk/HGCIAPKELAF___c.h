#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGCIAPKELAF;
namespace System { class Object; }

#define HGCIAPKELAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E546A10)
#define HGCIAPKELAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E546A40)
#define HGCIAPKELAF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E546A50)

inline static constexpr unsigned int HGCIAPKELAF___c_TypeDefinitionIndex = 27470;

	class HGCIAPKELAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x309A0);
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
