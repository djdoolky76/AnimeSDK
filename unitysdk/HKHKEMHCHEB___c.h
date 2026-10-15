#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKHKEMHCHEB;
namespace System { class Object; }

#define HKHKEMHCHEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B2BE0)
#define HKHKEMHCHEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B2C20)
#define HKHKEMHCHEB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5B2C30)

inline static constexpr unsigned int HKHKEMHCHEB___c_TypeDefinitionIndex = 28236;

	class HKHKEMHCHEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKHKEMHCHEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKEMHCHEB___C_CTOR_OFFSET))(this);
		}

		::HKHKEMHCHEB* __cctor_b__28_0()
		{
			return ((::HKHKEMHCHEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKHKEMHCHEB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
