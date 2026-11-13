#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMIDBKDMELM;
namespace System { class Object; }

#define AMIDBKDMELM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20030500)
#define AMIDBKDMELM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20030530)
#define AMIDBKDMELM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x20030540)

inline static constexpr unsigned int AMIDBKDMELM___c_TypeDefinitionIndex = 31303;

	class AMIDBKDMELM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMIDBKDMELM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIDBKDMELM___C_CTOR_OFFSET))(this);
		}

		::AMIDBKDMELM* __cctor_b__18_0()
		{
			return ((::AMIDBKDMELM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMIDBKDMELM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
