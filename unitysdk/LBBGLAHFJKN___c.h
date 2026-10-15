#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBBGLAHFJKN;
namespace System { class Object; }

#define LBBGLAHFJKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A9F60)
#define LBBGLAHFJKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A9FA0)
#define LBBGLAHFJKN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8A9FB0)

inline static constexpr unsigned int LBBGLAHFJKN___c_TypeDefinitionIndex = 34373;

	class LBBGLAHFJKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBBGLAHFJKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBGLAHFJKN___C_CTOR_OFFSET))(this);
		}

		::LBBGLAHFJKN* __cctor_b__28_0()
		{
			return ((::LBBGLAHFJKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBGLAHFJKN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
