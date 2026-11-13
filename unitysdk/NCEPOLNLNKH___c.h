#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCEPOLNLNKH;
namespace System { class Object; }

#define NCEPOLNLNKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202ECCB0)
#define NCEPOLNLNKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202ECCF0)
#define NCEPOLNLNKH___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x202ECD00)

inline static constexpr unsigned int NCEPOLNLNKH___c_TypeDefinitionIndex = 30247;

	class NCEPOLNLNKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCEPOLNLNKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEPOLNLNKH___C_CTOR_OFFSET))(this);
		}

		::NCEPOLNLNKH* __cctor_b__58_0()
		{
			return ((::NCEPOLNLNKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEPOLNLNKH___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
