#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNFFGHJKPJD;
namespace System { class Object; }

#define NNFFGHJKPJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB81EB0)
#define NNFFGHJKPJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB81EF0)
#define NNFFGHJKPJD___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EB81F00)

inline static constexpr unsigned int NNFFGHJKPJD___c_TypeDefinitionIndex = 31626;

	class NNFFGHJKPJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNFFGHJKPJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFFGHJKPJD___C_CTOR_OFFSET))(this);
		}

		::NNFFGHJKPJD* __cctor_b__38_0()
		{
			return ((::NNFFGHJKPJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFFGHJKPJD___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
