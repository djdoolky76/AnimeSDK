#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCECJDGICOC;
namespace System { class Object; }

#define PCECJDGICOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF06CB0)
#define PCECJDGICOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF06CF0)
#define PCECJDGICOC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF06D00)

inline static constexpr unsigned int PCECJDGICOC___c_TypeDefinitionIndex = 30578;

	class PCECJDGICOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35B40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCECJDGICOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCECJDGICOC___C_CTOR_OFFSET))(this);
		}

		::PCECJDGICOC* __cctor_b__23_0()
		{
			return ((::PCECJDGICOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCECJDGICOC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
