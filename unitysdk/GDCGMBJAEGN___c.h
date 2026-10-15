#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDCGMBJAEGN;
namespace System { class Object; }

#define GDCGMBJAEGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4170A0)
#define GDCGMBJAEGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4170D0)
#define GDCGMBJAEGN___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E4170E0)

inline static constexpr unsigned int GDCGMBJAEGN___c_TypeDefinitionIndex = 32373;

	class GDCGMBJAEGN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF6C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDCGMBJAEGN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCGMBJAEGN___C_CTOR_OFFSET))(this);
		}

		::GDCGMBJAEGN* __cctor_b__48_0()
		{
			return ((::GDCGMBJAEGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCGMBJAEGN___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
