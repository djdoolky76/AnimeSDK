#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGLAPJGFKPN;
namespace System { class Object; }

#define EGLAPJGFKPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF7F130)
#define EGLAPJGFKPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF7F160)
#define EGLAPJGFKPN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FF7F170)

inline static constexpr unsigned int EGLAPJGFKPN___c_TypeDefinitionIndex = 33770;

	class EGLAPJGFKPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGLAPJGFKPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLAPJGFKPN___C_CTOR_OFFSET))(this);
		}

		::EGLAPJGFKPN* __cctor_b__23_0()
		{
			return ((::EGLAPJGFKPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLAPJGFKPN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
