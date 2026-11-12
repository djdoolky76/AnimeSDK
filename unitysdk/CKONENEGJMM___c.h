#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKONENEGJMM;
namespace System { class Object; }

#define CKONENEGJMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3C22E0)
#define CKONENEGJMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3C2320)
#define CKONENEGJMM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F3C2330)

inline static constexpr unsigned int CKONENEGJMM___c_TypeDefinitionIndex = 31977;

	class CKONENEGJMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKONENEGJMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKONENEGJMM___C_CTOR_OFFSET))(this);
		}

		::CKONENEGJMM* __cctor_b__28_0()
		{
			return ((::CKONENEGJMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKONENEGJMM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
