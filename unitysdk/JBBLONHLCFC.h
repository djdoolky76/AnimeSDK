#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NLJMEMAMJLC.h"
class BJAKGOHEGBP;
class LIGHCKCMMAD;
class NLJMEMAMJLC;
namespace System { class Object; }

#define JBBLONHLCFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC765B0)
#define JBBLONHLCFC_GLKDGMKKAIL_OFFSET UNITYSDK_OFFSET(0x1EC765E0)
#define JBBLONHLCFC_PCAEFEEJIEP_OFFSET UNITYSDK_OFFSET(0x1EC76680)

inline static constexpr unsigned int JBBLONHLCFC_TypeDefinitionIndex = 44285;

	class JBBLONHLCFC : public ::NLJMEMAMJLC
	{
	public:
		::System::Void _ctor(::BJAKGOHEGBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJAKGOHEGBP*))((::PBYTE)hIl2Cpp + JBBLONHLCFC_CTOR_OFFSET))(this, a1);
		}

		::NLJMEMAMJLC* GLKDGMKKAIL()
		{
			return ((::NLJMEMAMJLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBBLONHLCFC_GLKDGMKKAIL_OFFSET))(this);
		}

		::LIGHCKCMMAD* PCAEFEEJIEP(::System::Object* a1)
		{
			return ((::LIGHCKCMMAD*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JBBLONHLCFC_PCAEFEEJIEP_OFFSET))(this, a1);
		}

	};
