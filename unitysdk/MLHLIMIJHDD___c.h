#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLHLIMIJHDD;
namespace System { class Object; }

#define MLHLIMIJHDD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F95AAB0)
#define MLHLIMIJHDD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F95AAE0)
#define MLHLIMIJHDD___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F95AAF0)

inline static constexpr unsigned int MLHLIMIJHDD___c_TypeDefinitionIndex = 31505;

	class MLHLIMIJHDD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CAE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLHLIMIJHDD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHLIMIJHDD___C_CTOR_OFFSET))(this);
		}

		::MLHLIMIJHDD* __cctor_b__38_0()
		{
			return ((::MLHLIMIJHDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLHLIMIJHDD___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
