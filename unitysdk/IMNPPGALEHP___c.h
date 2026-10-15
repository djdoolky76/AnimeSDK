#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMNPPGALEHP;
namespace System { class Object; }

#define IMNPPGALEHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B9B40)
#define IMNPPGALEHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B9B80)
#define IMNPPGALEHP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E6B9B90)

inline static constexpr unsigned int IMNPPGALEHP___c_TypeDefinitionIndex = 31255;

	class IMNPPGALEHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57A00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMNPPGALEHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMNPPGALEHP___C_CTOR_OFFSET))(this);
		}

		::IMNPPGALEHP* __cctor_b__18_0()
		{
			return ((::IMNPPGALEHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMNPPGALEHP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
