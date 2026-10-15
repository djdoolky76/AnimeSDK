#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMIGHLPJAME;
namespace System { class Object; }

#define FMIGHLPJAME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E6FE0)
#define FMIGHLPJAME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E7020)
#define FMIGHLPJAME___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3E7030)

inline static constexpr unsigned int FMIGHLPJAME___c_TypeDefinitionIndex = 34924;

	class FMIGHLPJAME___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64D00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMIGHLPJAME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIGHLPJAME___C_CTOR_OFFSET))(this);
		}

		::FMIGHLPJAME* __cctor_b__23_0()
		{
			return ((::FMIGHLPJAME*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIGHLPJAME___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
