#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABFLKIBIFDM;
namespace System { class Object; }

#define ABFLKIBIFDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDCB510)
#define ABFLKIBIFDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDCB550)
#define ABFLKIBIFDM___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1DDCB560)

inline static constexpr unsigned int ABFLKIBIFDM___c_TypeDefinitionIndex = 25591;

	class ABFLKIBIFDM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABFLKIBIFDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLKIBIFDM___C_CTOR_OFFSET))(this);
		}

		::ABFLKIBIFDM* __cctor_b__53_0()
		{
			return ((::ABFLKIBIFDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLKIBIFDM___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
