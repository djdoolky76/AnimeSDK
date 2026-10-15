#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJOPCPPJCHP;
namespace System { class Object; }

#define HJOPCPPJCHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E57FAB0)
#define HJOPCPPJCHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E57FAF0)
#define HJOPCPPJCHP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E57FB00)

inline static constexpr unsigned int HJOPCPPJCHP___c_TypeDefinitionIndex = 27342;

	class HJOPCPPJCHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x365F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJOPCPPJCHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOPCPPJCHP___C_CTOR_OFFSET))(this);
		}

		::HJOPCPPJCHP* __cctor_b__33_0()
		{
			return ((::HJOPCPPJCHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJOPCPPJCHP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
