#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMDGBBOHPDF;
namespace System { class Object; }

#define OMDGBBOHPDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB1C90)
#define OMDGBBOHPDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB1CD0)
#define OMDGBBOHPDF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DEB1CE0)

inline static constexpr unsigned int OMDGBBOHPDF___c_TypeDefinitionIndex = 26583;

	class OMDGBBOHPDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMDGBBOHPDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDGBBOHPDF___C_CTOR_OFFSET))(this);
		}

		::OMDGBBOHPDF* __cctor_b__28_0()
		{
			return ((::OMDGBBOHPDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDGBBOHPDF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
