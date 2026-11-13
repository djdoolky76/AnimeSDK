#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGGKLPDFGDC;
namespace System { class Object; }

#define NGGKLPDFGDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203FEB40)
#define NGGKLPDFGDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203FEB80)
#define NGGKLPDFGDC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x203FEB90)

inline static constexpr unsigned int NGGKLPDFGDC___c_TypeDefinitionIndex = 27549;

	class NGGKLPDFGDC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGGKLPDFGDC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGKLPDFGDC___C_CTOR_OFFSET))(this);
		}

		::NGGKLPDFGDC* __cctor_b__33_0()
		{
			return ((::NGGKLPDFGDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGKLPDFGDC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
