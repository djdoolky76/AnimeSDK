#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDKEAPHHLBM;
namespace System { class Object; }

#define JDKEAPHHLBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6DF180)
#define JDKEAPHHLBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DF1B0)
#define JDKEAPHHLBM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E6DF1C0)

inline static constexpr unsigned int JDKEAPHHLBM___c_TypeDefinitionIndex = 29078;

	class JDKEAPHHLBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5ABC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDKEAPHHLBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKEAPHHLBM___C_CTOR_OFFSET))(this);
		}

		::JDKEAPHHLBM* __cctor_b__18_0()
		{
			return ((::JDKEAPHHLBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKEAPHHLBM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
