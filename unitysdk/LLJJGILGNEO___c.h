#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLJJGILGNEO;
namespace System { class Object; }

#define LLJJGILGNEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E99CBB0)
#define LLJJGILGNEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E99CBF0)
#define LLJJGILGNEO___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E99CC00)

inline static constexpr unsigned int LLJJGILGNEO___c_TypeDefinitionIndex = 25099;

	class LLJJGILGNEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C1A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLJJGILGNEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJJGILGNEO___C_CTOR_OFFSET))(this);
		}

		::LLJJGILGNEO* __cctor_b__58_0()
		{
			return ((::LLJJGILGNEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLJJGILGNEO___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
