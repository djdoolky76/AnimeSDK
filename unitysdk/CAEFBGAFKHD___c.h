#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAEFBGAFKHD;
namespace System { class Object; }

#define CAEFBGAFKHD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E057840)
#define CAEFBGAFKHD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E057880)
#define CAEFBGAFKHD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E057890)

inline static constexpr unsigned int CAEFBGAFKHD___c_TypeDefinitionIndex = 33459;

	class CAEFBGAFKHD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAEFBGAFKHD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEFBGAFKHD___C_CTOR_OFFSET))(this);
		}

		::CAEFBGAFKHD* __cctor_b__28_0()
		{
			return ((::CAEFBGAFKHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEFBGAFKHD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
