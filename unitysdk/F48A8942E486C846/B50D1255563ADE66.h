#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F48A8942E486C846/A05FE6D787D0E199.h"
#include "unitysdk/System/MulticastDelegate.h"

class BBB8A0ACE043BE4F;
namespace System { class Object; }

#define F48A8942E486C846_B50D1255563ADE66_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7F90)
#define F48A8942E486C846_B50D1255563ADE66__CTOR_OFFSET UNITYSDK_OFFSET(0x374A7C0)

namespace F48A8942E486C846
{
	inline static constexpr unsigned int B50D1255563ADE66_TypeDefinitionIndex = 10924;

	class B50D1255563ADE66 : public ::System::MulticastDelegate
	{
	public:
		::System::Boolean Invoke(::BBB8A0ACE043BE4F* F7D59852CF1BE6B4, ::F48A8942E486C846::A05FE6D787D0E199 AF2BE19075E3FCDE)
		{
			return ((::System::Boolean(*)(::PVOID, ::BBB8A0ACE043BE4F*, ::F48A8942E486C846::A05FE6D787D0E199))((::PBYTE)hIl2Cpp + F48A8942E486C846_B50D1255563ADE66_INVOKE_OFFSET))(this, F7D59852CF1BE6B4, AF2BE19075E3FCDE);
		}

		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + F48A8942E486C846_B50D1255563ADE66__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}
	};
}
