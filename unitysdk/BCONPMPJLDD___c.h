#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCONPMPJLDD;
namespace System { class Object; }

#define BCONPMPJLDD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8E4BD0)
#define BCONPMPJLDD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E4C10)
#define BCONPMPJLDD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8E4C20)

inline static constexpr unsigned int BCONPMPJLDD___c_TypeDefinitionIndex = 30774;

	class BCONPMPJLDD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x516F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCONPMPJLDD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCONPMPJLDD___C_CTOR_OFFSET))(this);
		}

		::BCONPMPJLDD* __cctor_b__23_0()
		{
			return ((::BCONPMPJLDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCONPMPJLDD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
