#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLEHOPOJKKM;
namespace System { class Object; }

#define DLEHOPOJKKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E4740)
#define DLEHOPOJKKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E4780)
#define DLEHOPOJKKM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1E4790)

inline static constexpr unsigned int DLEHOPOJKKM___c_TypeDefinitionIndex = 26263;

	class DLEHOPOJKKM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D2B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLEHOPOJKKM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEHOPOJKKM___C_CTOR_OFFSET))(this);
		}

		::DLEHOPOJKKM* __cctor_b__23_0()
		{
			return ((::DLEHOPOJKKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLEHOPOJKKM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
