#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOKKHLOIBIM;
namespace System { class Object; }

#define EOKKHLOIBIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD86C90)
#define EOKKHLOIBIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD86CD0)
#define EOKKHLOIBIM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD86CE0)

inline static constexpr unsigned int EOKKHLOIBIM___c_TypeDefinitionIndex = 27733;

	class EOKKHLOIBIM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F7D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOKKHLOIBIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKKHLOIBIM___C_CTOR_OFFSET))(this);
		}

		::EOKKHLOIBIM* __cctor_b__28_0()
		{
			return ((::EOKKHLOIBIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOKKHLOIBIM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
