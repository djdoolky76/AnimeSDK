#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBJEKJOCIDM;
namespace System { class Object; }

#define CBJEKJOCIDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E06CF80)
#define CBJEKJOCIDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E06CFC0)
#define CBJEKJOCIDM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E06CFD0)

inline static constexpr unsigned int CBJEKJOCIDM___c_TypeDefinitionIndex = 32365;

	class CBJEKJOCIDM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC7F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBJEKJOCIDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJEKJOCIDM___C_CTOR_OFFSET))(this);
		}

		::CBJEKJOCIDM* __cctor_b__28_0()
		{
			return ((::CBJEKJOCIDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJEKJOCIDM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
