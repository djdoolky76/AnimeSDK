#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNCHJBMIMAF;
namespace System { class Object; }

#define LNCHJBMIMAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E984AD0)
#define LNCHJBMIMAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E984B10)
#define LNCHJBMIMAF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E984B20)

inline static constexpr unsigned int LNCHJBMIMAF___c_TypeDefinitionIndex = 31027;

	class LNCHJBMIMAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3FBA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNCHJBMIMAF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCHJBMIMAF___C_CTOR_OFFSET))(this);
		}

		::LNCHJBMIMAF* __cctor_b__23_0()
		{
			return ((::LNCHJBMIMAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCHJBMIMAF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
